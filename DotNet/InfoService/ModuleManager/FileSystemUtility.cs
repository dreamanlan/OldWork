using System;
using System.IO;

namespace Dreaman.InfoService
{
	/// <summary>
	/// FileSystemUtility 的摘要说明。
	/// </summary>
	public sealed class FileSystemUtility
	{
		private FileSystemUtility()
		{}
		public static void CopyDirectory(string source,string dest,bool overWrite)
		{
			if(!Directory.Exists(source))
			{
				throw new Exception(source+"不存在！");
			}
			if(!Directory.Exists(dest))
			{
				Directory.CreateDirectory(dest);
			}
			string[] files=Directory.GetFiles(source);
			foreach(string file in files)
			{				
				string destFile=Path.Combine(dest,Path.GetFileName(file));
				File.Copy(file,destFile,overWrite);
			}
			string[] dirs=Directory.GetDirectories(source);
			foreach(string dir in dirs)
			{
				string destDir=Path.Combine(dest,Path.GetFileName(dir));
				CopyDirectory(dir,destDir,overWrite);
			}
		}
		public static void EmptyDirectory(string dir)
		{
			if (!Directory.Exists(dir))
			{
				return;
			}
			string[] files = Directory.GetFiles(dir);
			foreach (string file in files)
			{
				string destFile = Path.Combine(dir, Path.GetFileName(file));
				File.Delete(destFile);
			}
			string[] dirs = Directory.GetDirectories(dir);
			foreach (string _dir in dirs)
			{
				DeleteDirectory(_dir);
			}
		}
		public static void DeleteDirectory(string dir)
		{
			if (!Directory.Exists(dir))
			{
				return;
			}
			string[] files = Directory.GetFiles(dir);
			foreach (string file in files)
			{
				string destFile = Path.Combine(dir, Path.GetFileName(file));
				File.Delete(destFile);
			}
			string[] dirs = Directory.GetDirectories(dir);
			foreach (string _dir in dirs)
			{
				DeleteDirectory(_dir);
			}
			Directory.Delete(dir);
		}
	}
	public sealed class ColorTransform
	{
		private ColorTransform(){}
		/// <summary>
		/// 将整数表示的RGB颜色值转为HSL表示的颜色值，H（0~360）S（0~1.0）L（0~1.0）
		/// </summary>
		/// <param name="rgb"></param>
		/// <returns></returns>
		public static double[] RGB2HSL(uint rgb)
		{
			double R=(double)((rgb & 0xFF0000)>>16);
			double G=(double)((rgb & 0x00FF00)>>8);
			double B=(double)(rgb & 0x0000FF);
			R = ( R / 255.0 );
			G = ( G / 255.0 );
			B = ( B / 255.0 );

			double var_Min = Math.Min(Math.Min( R, G ), B );
			double var_Max = Math.Max(Math.Max( R, G ), B );
			double del_Max = var_Max - var_Min;				

			double H = 0.0;
			double S = 0.0;
			double L = ( var_Max + var_Min ) / 2.0;

			if ( del_Max == 0.0 )							
			{
				H = 0.0;									
				S = 0.0;
			}
			else											
			{
				if ( L < 0.5 ) 
					S = del_Max / ( var_Max + var_Min );
				else           
					S = del_Max / ( 2.0 - var_Max - var_Min );

				double del_R = ( ( ( var_Max - R ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
				double del_G = ( ( ( var_Max - G ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
				double del_B = ( ( ( var_Max - B ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;

				if ( R == var_Max ) 
					H = del_B - del_G;
				else if ( G == var_Max ) 
					H = ( 1.0 / 3.0 ) + del_R - del_B;
				else if ( B == var_Max ) 
					H = ( 2.0 / 3.0 ) + del_G - del_R;

				if ( H < 0.0 ) 
					H += 1.0;
				if ( H > 1.0 ) 
					H -= 1.0;
				H *= 360;
			}
			return new double[]{H,S,L};
		}
		/// <summary>
		/// 将HSL表示的颜色转为RGB表的颜色
		/// </summary>
		/// <param name="H">0~360 色相</param>
		/// <param name="S">0~1.0 饱和度</param>
		/// <param name="L">0~1.0 亮度</param>
		/// <returns>0x00RRGGBB 32位整数表示的RGB颜色值</returns>
		public static uint HSL2RGB(double H,double S,double L)
		{
			uint R=0,G=0,B=0;
			H/=360.0;
			if ( S == 0.0 )
			{
				R = (uint)(L * 255.0);
				G = (uint)(L * 255.0);
				B = (uint)(L * 255.0);
			}
			else
			{
				double var_1,var_2;
				if ( L < 0.5 ) 
					var_2 = L * ( 1.0 + S );
				else           
					var_2 = ( L + S ) - ( S * L );

				var_1 = 2.0 * L - var_2;

				R = (uint)(255 * Hue2RGB( var_1, var_2, H + ( 1.0 / 3.0 ) ));
				G = (uint)(255 * Hue2RGB( var_1, var_2, H ));
				B = (uint)(255 * Hue2RGB( var_1, var_2, H - ( 1.0 / 3.0 ) ));
			}
			return R*256*256+G*256+B;
		}
		private static double Hue2RGB( double v1,double v2,double vH )
		{
			if ( vH < 0.0 ) 
				vH += 1.0;
			if ( vH > 1.0 ) 
				vH -= 1.0;
			if ( ( 6.0 * vH ) < 1.0 ) return ( v1 + ( v2 - v1 ) * 6.0 * vH );
			if ( ( 2.0 * vH ) < 1.0 ) return ( v2 );
			if ( ( 3.0 * vH ) < 2.0 ) return ( v1 + ( v2 - v1 ) * ( ( 2.0 / 3.0 ) - vH ) * 6.0 );
			return v1;
		}
		public static double[] RGB2HSV(uint rgb)
		{
			double R=(double)((rgb & 0xFF0000)>>16);
			double G=(double)((rgb & 0x00FF00)>>8);
			double B=(double)(rgb & 0x0000FF);

			R = ( R / 255.0 );
			G = ( G / 255.0 );
			B = ( B / 255.0 );

			double var_Min = Math.Min( Math.Min(R, G), B );
			double var_Max = Math.Max( Math.Max(R, G), B );
			double del_Max = var_Max - var_Min;

			double H = 0.0;
			double S = 0.0;
			double V = var_Max;

			if ( del_Max == 0.0 )
			{
				H = 0.0;
				S = 0.0;
			}
			else
			{
				S = del_Max / var_Max;

				double del_R = ( ( ( var_Max - R ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
				double del_G = ( ( ( var_Max - G ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;
				double del_B = ( ( ( var_Max - B ) / 6.0 ) + ( del_Max / 2.0 ) ) / del_Max;

				if ( R == var_Max ) 
					H = del_B - del_G;
				else if ( G == var_Max ) 
					H = ( 1.0 / 3.0 ) + del_R - del_B;
				else if ( B == var_Max ) 
					H = ( 2.0 / 3.0 ) + del_G - del_R;

				if ( H < 0.0 ) 
					H += 1;
				if ( H > 1.0 ) 
					H -= 1;
				H*=360;
			}
			return new double[]{H,S,V};
		}
		/// <summary>
		/// 将HSV颜色值转换为32位整数表示的RGB颜色值
		/// </summary>
		/// <param name="h"></param>
		/// <param name="s"></param>
		/// <param name="v"></param>
		/// <returns></returns>
		public static uint HSV2RGB(double h, double s, double v) 
		{
			if (s == 0.0) 
			{
				return RGB2Integer(v,v,v);
			}
			else 
			{
				if(h == 360.0) 
					h = 0.0;
				h /= 60.0;
				int i= (int)h;
				double f= h - i;
				double p= v * (1.0 - s);
				double q= v * (1.0 - (s*f));
				double t= v * (1.0 - (s * (1.0-f)));
				uint[] rgb={RGB2Integer(v,t,p), RGB2Integer(q,v,p), RGB2Integer(p,v,t), RGB2Integer(p,q,v), RGB2Integer(t,p,v), RGB2Integer(v,p,q)};
				return rgb[i];
			}
		}
		private static uint RGB2Integer(double r,double g,double b)
		{
			return ((uint)(r*255))*256*256+((uint)(g*255))*256+(uint)(b*255);
		}
	}
}
