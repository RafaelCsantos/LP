int main()
{
int a,b=1;
printf ("Enter number to calculate its factorial:");
scanf ("%d",&a);
if (a==0) {
printf ("You entered 0");
return 0;
}

else

for (a=a;a>0;a--)
{
b=b*a;

}
printf ("Answer is %ld",b);


return 0;
}
