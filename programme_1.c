// Hey there !! here is the complete us eof escape sequences
//These are the identifiers which change the place of pointer or cursor
/* These escape sequences are :
                \n    -   new line
                \t    -   tab space
                \r    -   carriage return
                \b    -   back space
                \\    -   print back slash
                \"    -   print double quotes
                \'    -   print single quotes
                                                     */
main()
{
    // use of \n
    printf("Hello ");
    getch();
    printf("World");
    getch();
    printf("\n");
    getch();
    // use of \t
    printf("Hello");
    getch();
    printf("\t");
    getch();
    printf("World \n");
    getch();
    // use of \r
    printf("Hello");
    getch();
    printf("\r");
    getch();
    printf("World \n");
    getch();
    // use of \b
    printf("Hello");
    getch();
    printf("\b");
    getch();
    printf("World \n");
    getch();
    // use of '\\'
    printf("Hello \\World \n");
    getch();
    // use of \"
    printf("\"Hello World\" \n");
    getch();
    // use of /'
    printf("\'Hello World\'");
    getch();
}
