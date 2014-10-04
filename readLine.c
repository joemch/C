void readLine(char cadena[], int tam){
    fgets(cadena,tam,stdin);
    if (cadena[strlen(cadena)-1] == '\n')
        cadena[strlen(cadena)-1] = '\0';
    else{
        cadena[tam-1] = '\0';
        while((getchar()) != '\n'){};
    }
}
