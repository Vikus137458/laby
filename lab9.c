# include < stdio .h >
# include < string .h >
int main ()
{
    char str [41] = "I ’ m going off the rails on a crazy train ";
    char delim [3] = " , ";
    char * p = strtok ( str , delim ) ;
    printf ( p ) ;
    while ( p = strtok ( NULL , delim ) )
    printf ("|% s " , p ) ;
    return 0;
}
