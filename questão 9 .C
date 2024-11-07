int main() {
    int i = 0;
	char str[100];
    int cont = 0;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
