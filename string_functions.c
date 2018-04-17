int strlen(char* s) {
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}

void strcpy(char *s, char* t) {
	//when *t is '\0', this while statement becomes false
	while (*s++ = *t++);
}

int strcmp(char *s, char* t) {
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
