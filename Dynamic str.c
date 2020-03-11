char *dstr_readword()
{
    char*a;
    a = (char*)malloc(sizeof(char)*100);
    char str;
    int i = 0;
    scanf("%c",&str);
    int cnt = 1;
    while(str!='\t'&&str!='\n'&&str!=' ')
    {
        a[i] = str;
        if(scanf("%c",&str)==EOF)
            {
                a[i+1] = '\0';
                break;
            }
        i++;
        if(i%99==0)
        {
            a[i] = '\0';
            char*b = (char*)malloc(sizeof(char)*cnt*100);
            strcpy(b,a);
            free(a);
            cnt++;
            a = (char*)malloc(sizeof(char)*100*cnt);
            strcpy(a,b);
            free(b);
        }
    }
    return a;

}
char *dstr_create(const char *s)
{
    char*t = (char*)malloc(sizeof(char)*strlen(s));
    strcpy(t,s);
    return t;
}
char *dstr_add(char *s, char c)
{
    char*t = (char*)malloc(sizeof(char)*(strlen(s)+2));
    strcpy(t,s);
    t[strlen(s)] = c;
    t[strlen(s)+1] = '\0';
    free(s);
    return t;
}
char *dstr_concat(char *this, const char *that)
{
    char*t = (char*)malloc(sizeof(char)*(strlen(this)+strlen(that)+1));
    strcpy(t,this);
    strcat(t,that);
    return t;
}
char *dstr_remove(char *s, int index)
{
    char*t = s + index + 1;
    char*u = (char*)malloc(sizeof(char)*(strlen(s)));
    s[index] = '\0';
    strcpy(u,s);
    strcat(u,t);
    return u;
}
