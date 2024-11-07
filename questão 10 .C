int main() {
    int i = 0;
	char str[100];
    int letras = 0, digito = 0, especial = 0;
    scanf("%s", str);
    for ( i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letras++;
        } else if (isdigit(str[i])) {
            digito++;
        } else {
            especial++;
        }
    }
    printf("Letras: %d\n", letras);
    printf("Dígitos: %d\n", digito);
    printf("Especiais: %d\n", especial);
    return 0;
}

