switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), l = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), l = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), l = 1;
				break;
			case 's':
				r = va_arg(ptr, char *), l = 1;
				if (r)
				{
					printf("%s", r);
					break;
				}
				printf("(nil)");
				break;
		}
