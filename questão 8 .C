int main() {
    int i = 0;
	char str[100];
    int cont = 0;
    scanf("%s", str);
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
