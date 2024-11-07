int main() {
    int i = 0;
	char str[100];
    scanf("%s", str);
    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    return 0;
}
