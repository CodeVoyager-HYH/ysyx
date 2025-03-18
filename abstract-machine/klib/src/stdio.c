#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__) 

int printf(const char *fmt, ...) {
   //panic("Not implemented");	
   	int count;
	char buf[2048];
	va_list args;
	va_start(args, fmt);

	count = vsprintf(buf,fmt,args);
	
	putstr(buf);
	va_end(args);
	return count;

}
int vsprintf(char *out, const char *fmt, va_list ap) {
    //panic("Not implemented");
	int count = 0;//字符数
	int precision = 0;
  	while(*fmt != '\0'){
		precision = 0;
		if(*fmt == '%'){
			fmt++;
			while(*fmt >='0'&& *fmt<='9'){
				precision = precision * 10 + (*fmt - '0');
					fmt ++;
			}
			switch(*fmt){
				case 'x':
				case 'd':
					int num = va_arg(ap, int); 
					if(num == 0){
						int num_bit = 1;
						if(num_bit >= precision){
							*out++ = '0';
							count++;
						}
						else{
							int sub = precision - num_bit;
							while (sub>0)
							{
								*out++ = '0';
								count++;
								sub--;
							}

							*out++ = '0';
							count++;
						}
					}
					else{
						if(num < 0)
						{
							*out++ = '-';
							count++;
							fmt++;
							num = -1 * num;//转化成正数
						}

						int bit = 1;//判断保存的数字的位数
						int num_bit = 1;
						while (num / bit >= 10)
						{
							bit *= 10;
							num_bit++;
						}
						if(num_bit >= precision){
							while (bit>0)
							{
								*out++ = num / bit + '0';
								count++;
								num %= bit; 
        						bit /= 10; 
							}
						}
						else{
							int sub = precision - num_bit;
							while (sub > 0)
							{
								*out++ = '0';
								count++;
								sub--;
							}
							while (bit>0)
							{
								*out++ = num / bit + '0';
								count++;
								num %= bit; 
        						bit /= 10; 
							}
						}
					}
					break;
				case 'c':
					char character = (char)va_arg(ap, int);
					*out++ = character;
					count++;
					fmt++;
					break;	
				case 's':
					char *str = va_arg(ap, char *);
                    while (*str!='\0') 
						{
                        	*out++ = *str++;
							count++;
            			}
					fmt++;
                    break;
				default:	
			}
			fmt++;
		}
		else{
			*out++ = *fmt++;
			count++;
		}
	}
	*out = '\0';
	if(count == 0) count = -1;
	return count;
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
	char *start = out;
	va_list args;
	// 解析...中的参数
	va_start(args, fmt);

	vsprintf(out, fmt, args);
	
	va_end(args);
	return out - start;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");


}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
	
  panic("Not implemented");
}

#endif	
