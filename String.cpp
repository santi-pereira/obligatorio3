#include "String.h"

void strcrear (String &s)
{

    s = new char [1];
    s[0] = '\0';


}

void strdestruir (String &s)
{
    delete []s;
    s = NULL;

}

int strlar (String s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void print (String s)
{
    int i = 0;
    while (s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}

void scan (String &s)
{
    String aux = new char[MAX];
    int i=0;
    char c;
    fflush (stdin);
    scanf ("%c", &c);

    while (c!= '\n' && i < MAX-1)
    {
        aux[i] = c;
        i++;
        scanf ("%c", &c);
    }
    aux[i] = '\0';
    strcop (s,aux);
    strdestruir (aux);
}


boolean streq (String s1, String s2)
{
    int i = 0;
    boolean iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
            iguales = FALSE;
        i++;
    }
    if ((s1[i] != '\0') || (s2[i] != '\0'))
        iguales = FALSE;
    return iguales;
}

void strcop (String &s1,String s2)
{
    int i = 0;
    int largo = strlar(s2) + 1;
    delete [] s1;
    s1 = new char[largo];

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

boolean esVacio (String s)
{
    boolean es;

    if (strlar(s) == 0)
    {
        es = TRUE;
    }
    else
    {
        es = FALSE;
    }
    return es;

}

void strswp (String &s1,String &s2)
{
    String aux;
    strcop (aux,s1);
    strcop (s1,s2);
    strcop (s2,aux);
}

//Devuelve true si el primer string str1 es alfabŽticamente menor que el string str2
boolean esMenor(String str1, String str2)
{
    boolean resp = TRUE;
    while(*str1 != '/0' && *str2 != '/0' && resp == TRUE)
    {
        if (*str1 > *str2)
            resp = FALSE;

        str1++;
        str2++;
    }

    if(resp == TRUE)
    {
        if(*str1 != '/0')
            resp = FALSE;
    }

    return resp;

}

boolean CompararStrings(String s1, String s2)
{
    boolean resp = TRUE;
    int i = 0;


    while(resp == TRUE && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if(s1[i] != s2[i])
        {
            resp = FALSE;
        }

        i++;
    }


    return resp;
}


