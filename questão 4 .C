int main() {
    int i = 0;
	char str[100];
    int count = 0;
    scanf("%s", str);
    for ( i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

