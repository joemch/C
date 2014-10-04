int readFile(char *nomFile, char delimCampo, char delimRegistro){

    FILE* fd;

    if( ( fd=fopen(nomFile,"rt")) == NULL ){
        printf("\n\t\t\t    [msgError]: No se pudo abrir el archivo.");
        return -1;
    }
    else{
        fseek(fd,0,0);
        int i=0;
        char buffer[MAX_CAMPO];
        int cont = 0;
        while( !feof(fd) ){

            buffer[i++] = fgetc(fd);

            if( buffer[i-1] == delimCampo){
                buffer[i-1] = '\0';
                printf("% 12s",buffer);
                i = 0;
            }

            if( buffer[i-1] == delimRegistro){
                buffer[i-1] = '\0';
                cont++;
                i = 0;
                printf("% 12s\n\t",buffer);
            }
        } // Fin de while
        fclose(fd);
    }
    return 0;
}
