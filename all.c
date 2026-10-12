1.1
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) printf("%d ", i);
    return 0;
}
1.2
#include <stdio.h>
int main(void) {
    int x, y, sum = 0;
    scanf("%d%d", &x, &y);
    if (x > y) { int t = x; x = y; y = t; }
    for (int i = x; i <= y; i++) sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}
1.3
#include <stdio.h>
int main(void) {
    int x, n;
    long long result = 1;
    scanf("%d%d", &x, &n);
    if (n < 0) { printf("Exponent must be non-negative.\n"); return 1; }
    for (int i = 0; i < n; i++) result *= x;
    printf("%lld\n", result);
    return 0;
}
1.4
#include <stdio.h>
int main(void) {
    int n, prime = 1;
    scanf("%d", &n);
    if (n < 2) prime = 0;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0) { prime = 0; break; }
    printf(prime ? "Prime\n" : "Not prime\n");
    return 0;
}
1.5
#include <stdio.h>
int main(void) {
    long long n;
    int count = 0;
    scanf("%lld", &n);
    if (n < 0) n = -n;
    do { count++; n /= 10; } while (n != 0);
    printf("Digits = %d\n", count);
    return 0;
}
1.6
#include <stdio.h>
int main(void) {
    char ch;
    int n;
    scanf(" %c%d", &ch, &n);
    for (int i = 1; i <= n; i++) printf("%c ", (char)(ch + i));
    return 0;
}
1.7
#include <stdio.h>
int main(void) {
    int low, high;
    scanf("%d%d", &low, &high);
    for (int n = low; n <= high; n++) {
        int prime = n >= 2;
        for (int d = 2; d <= n / d && prime; d++)
            if (n % d == 0) prime = 0;
        if (prime) printf("%d ", n);
    }
    return 0;
}
1.8
#include <stdio.h>
int main(void) {
    int start, end, multiples;
    scanf("%d%d%d", &start, &end, &multiples);
    for (int j = 1; j <= multiples; j++) {
        for (int i = start; i <= end; i++)
            printf("%d x %d = %d\t", i, j, i * j);
        printf("\n");
    }
    return 0;
}
1.9
#include <stdio.h>
int main(void) {
    int n;
    char ch = 'A';
    scanf("%d", &n);
    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++)
            printf("%c\t", ch++);
        printf("\n");
    }
    return 0;
}
1B.1
#include <stdio.h>
int main(void) {
    double x, sum = 0;
    int n;
    scanf("%lf%d", &x, &n);
    for (int i = 0; i < n; i++) sum += (2 * i + 1) * x;
    printf("Sum = %.2f\n", sum);
    return 0;
}
1B.2
/* The series formula is missing from the supplied PDF, so a unique solution
   cannot be determined from the assignment sheet. */
1C.1
#include <stdio.h>
int main(void) {
    int n, original, reversed = 0;
    scanf("%d", &n);
    original = n;
    while (n > 0) { reversed = reversed * 10 + n % 10; n /= 10; }
    if (original >= 0 && original == reversed) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}
1C.2
#include <stdio.h>
int main(void) {
    for (int n = 1; n <= 500; n++) {
        int temp = n, sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    return 0;
}
1C.3
#include <stdio.h>
int main(void) {
    for (int n = 1; n < 500; n++) {
        int sum = 0;
        for (int d = 1; d <= n / 2; d++)
            if (n % d == 0) sum += d;
        if (sum == n) printf("%d ", n);
    }
    return 0;
}
2A.1
#include <stdio.h>
#include <math.h>
int main(void) {
    int choice;
    double x;
    do {
        printf("\n1.Sine 2.Cosine 3.Log 4.Exp 5.Sqrt 6.Exit\n");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5) {
            printf("Enter x: "); scanf("%lf", &x);
        }
        switch (choice) {
            case 1: printf("%.4f\n", sin(x)); break;
            case 2: printf("%.4f\n", cos(x)); break;
            case 3: if (x > 0) printf("%.4f\n", log(x)); else puts("x must be positive"); break;
            case 4: printf("%.4f\n", exp(x)); break;
            case 5: if (x >= 0) printf("%.4f\n", sqrt(x)); else puts("x must be non-negative"); break;
            case 6: break;
            default: puts("Invalid choice");
        }
    } while (choice != 6);
    return 0;
}
2A.2
#include <stdio.h>
typedef struct { double r, i; } Complex;
int main(void) {
    Complex a, b;
    int choice;
    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Exit\n");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 3) {
            printf("Enter real and imaginary parts of first number: ");
            scanf("%lf%lf", &a.r, &a.i);
            printf("Enter real and imaginary parts of second number: ");
            scanf("%lf%lf", &b.r, &b.i);
        }
        switch (choice) {
            case 1: printf("%.2f %+.2fi\n", a.r+b.r, a.i+b.i); break;
            case 2: printf("%.2f %+.2fi\n", a.r-b.r, a.i-b.i); break;
            case 3: printf("%.2f %+.2fi\n", a.r*b.r-a.i*b.i, a.r*b.i+a.i*b.r); break;
            case 4: break;
            default: puts("Invalid choice");
        }
    } while (choice != 4);
    return 0;
}
2B.1
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(void) {
    int choice;
    char ch;
    do {
        printf("\n1.Alphabet 2.Digit cube 3.Lowercase next uppercase 4.Uppercase next lowercase 5.Exit\n");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) { printf("Character: "); scanf(" %c", &ch); }
        switch (choice) {
            case 1: puts(isalpha((unsigned char)ch) ? "Alphabet" : "Not an alphabet"); break;
            case 2: if (isdigit((unsigned char)ch)) printf("Cube = %.0f\n", pow(ch-'0', 3)); else puts("Not a digit"); break;
            case 3: if (islower((unsigned char)ch)) printf("%c\n", toupper((unsigned char)(ch+1))); else puts("Not lowercase"); break;
            case 4: if (isupper((unsigned char)ch)) printf("%c\n", tolower((unsigned char)(ch+1))); else puts("Not uppercase"); break;
            case 5: break;
            default: puts("Invalid choice");
        }
    } while (choice != 5);
    return 0;
}
3A.1
#include <stdio.h>
int Max(int a, int b) { return a > b ? a : b; }
int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Maximum = %d\n", Max(Max(a,b),c));
    return 0;
}
3A.2
#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / i; i++) if (n % i == 0) return 0;
    return 1;
}
int main(void) {
    int n;
    do {
        printf("Enter number (0 to quit): ");
        if (scanf("%d", &n) != 1) return 0;
        if (n != 0) printf("%d is %s\n", n, isPrime(n) ? "prime" : "not prime");
    } while (n != 0);
    return 0;
}
3B.1
#include <stdio.h>
int isEven(int n) { return n % 2 == 0; }
int main(void) {
    int n;
    printf("How many numbers? "); scanf("%d", &n);
    for (int i = 0, x; i < n; i++) {
        scanf("%d", &x);
        printf("%d is %s\n", x, isEven(x) ? "even" : "odd");
    }
    return 0;
}
3B.2
#include <stdio.h>
void nextChars(char ch, int n) {
    for (int i = 1; i <= n; i++) printf("%c ", (char)(ch+i));
    printf("\n");
}
int main(void) {
    char ch; int n;
    scanf(" %c%d", &ch, &n);
    nextChars(ch, n);
    return 0;
}
3C.1
#include <stdio.h>
long long fib(int n) {
    if (n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}
int main(void) {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; i++) printf("%lld ", fib(i));
    return 0;
}
3C.2
#include <stdio.h>
#include <ctype.h>
int classify(int c) {
    if (isalpha((unsigned char)c)) return 1;
    if (isdigit((unsigned char)c)) return 2;
    return 3;
}
int main(void) {
    int c, a = 0, d = 0, s = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\r') continue;
        int type = classify(c);
        if (type == 1) a++; else if (type == 2) d++; else s++;
    }
    printf("Alphabets=%d Digits=%d Special symbols=%d\n", a, d, s);
    return 0;
}
4A.1
#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    if (n < 1 || n > 1000) return 1;
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int min=a[0], max=a[0];
    for (int i=1;i<n;i++) { if(a[i]<min) min=a[i]; if(a[i]>max) max=a[i]; }
    printf("Smallest=%d Largest=%d\n",min,max);
    return 0;
}
4A.2
#include <stdio.h>
int main(void) {
    int count[26]={0}, x, target;
    while (scanf("%d",&x)==1 && x!=-1)
        if (x>=1 && x<=25) count[x]++;
    scanf("%d",&target);
    if(target>=1 && target<=25) printf("Hit count=%d\n",count[target]);
    else puts("Target out of range");
    return 0;
}
4A.3
#include <stdio.h>
int occurrences(const int a[], int n, int key) {
    int count=0;
    for(int i=0;i<n;i++) if(a[i]==key) count++;
    return count;
}
int main(void) {
    int n,a[1000],key; scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&key);
    printf("%d occurs %d times\n",key,occurrences(a,n,key));
    return 0;
}
4A.4
#include <stdio.h>
#define MAX 20
void accept(int a[MAX][MAX],int r,int c){
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
}
void add(int a[MAX][MAX],int b[MAX][MAX],int s[MAX][MAX],int r,int c){
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)s[i][j]=a[i][j]+b[i][j];
}
void display(int a[MAX][MAX],int r,int c){
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]);puts("");}
}
int main(void){
    int r,c,a[MAX][MAX],b[MAX][MAX],s[MAX][MAX];
    scanf("%d%d",&r,&c);
    if(r<1||r>MAX||c<1||c>MAX)return 1;
    accept(a,r,c); accept(b,r,c); add(a,b,s,r,c); display(s,r,c);
    return 0;
}
4B.1
#include <stdio.h>
int main(void) {
    int n; double sum=0; scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0,x;i<n;i++){scanf("%d",&x);sum+=x;}
    printf("Average=%.2f\n",sum/n);
    return 0;
}
4B.2
#include <stdio.h>
int main(void) {
    int n,a[50][50],sum=0; scanf("%d",&n);
    if(n<1||n>50)return 1;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)sum+=a[i][i];
    printf("Diagonal sum=%d\n",sum);
    return 0;
}
4C.1
#include <stdio.h>
int main(void) {
    int n,a[1000],m=0; scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int found=0;
        for(int j=0;j<m;j++)if(a[j]==a[i]){found=1;break;}
        if(!found)a[m++]=a[i];
    }
    for(int i=0;i<m;i++)printf("%d ",a[i]);
    return 0;
}
4C.2
#include <stdio.h>
int main(void) {
    int m,n,a[50][50]; scanf("%d%d",&m,&n);
    if(m<1||m>50||n<1||n>50)return 1;
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){printf("%d ",a[i][j]);sum+=a[i][j];}
        printf("%d\n",sum);
    }
    for(int j=0;j<n;j++){
        int sum=0;for(int i=0;i<m;i++)sum+=a[i][j];
        printf("%d ",sum);
    }
    int total=0;for(int i=0;i<m;i++)for(int j=0;j<n;j++)total+=a[i][j];
    printf("%d\n",total);
    return 0;
}
5A.1
#include <stdio.h>
int main(void) {
    int a,b; scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    printf("Add=%d\nSubtract=%d\nMultiply=%d\n",*p+*q,*p-*q,*p**q);
    if(*q)printf("Divide=%.2f\nRemainder=%d\n",(double)*p/ *q,*p%*q);
    else puts("Division by zero is undefined");
    return 0;
}
5A.2
#include <stdio.h>
int main(void) {
    int n; scanf("%d",&n); int *p=&n;
    printf("%s\n",*p%2==0 ? "Even" : "Odd");
    return 0;
}
5A.3
#include <stdio.h>
int main(void) {
    int a,b; scanf("%d%d",&a,&b);
    int *p=&a,*q=&b;
    printf("Maximum=%d\n",*p>*q?*p:*q);
    return 0;
}
5A.4
#include <stdio.h>
int main(void) {
    int n,a[1000];scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int *p=a+n-1;
    for(int i=0;i<n;i++)printf("%d ",*p--);
    return 0;
}
5B.1
#include <stdio.h>
int main(void) {
    int n,a[1000];scanf("%d",&n);
    if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)scanf("%d",a+i);
    int min=*a;for(int i=1;i<n;i++)if(*(a+i)<min)min=*(a+i);
    printf("Minimum=%d\n",min);return 0;
}
5B.2
#include <stdio.h>
void minmax(int a[],int n,int *mn,int *mx){
    *mn=*mx=a[0];
    for(int i=1;i<n;i++){if(a[i]<*mn)*mn=a[i];if(a[i]>*mx)*mx=a[i];}
}
int main(void){
    int n,a[1000],mn,mx;scanf("%d",&n);if(n<1||n>1000)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    minmax(a,n,&mn,&mx);printf("Min=%d Max=%d\n",mn,mx);return 0;
}
5C.1
#include <stdio.h>
int leap(int y){return y%400==0||(y%4==0&&y%100!=0);}
int monthDays(int m,int y){
    int d[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2&&leap(y))return 29;
    return (m>=1&&m<=12)?d[m-1]:0;
}
void addDays(int *dd,int *mm,int *yy,int n){
    while(n-->0){(*dd)++;if(*dd>monthDays(*mm,*yy)){*dd=1;(*mm)++;if(*mm>12){*mm=1;(*yy)++;}}}
}
int main(void){
    int d,m,y,n;scanf("%d%d%d",&d,&m,&y);scanf("%d",&n);
    if(d<1||d>monthDays(m,y)||n<0)return 1;
    addDays(&d,&m,&y,n);printf("%02d/%02d/%04d\n",d,m,y);return 0;
}
5C.2
#include <stdio.h>
int prime(int n){if(n<2)return 0;for(int i=2;i<=n/i;i++)if(n%i==0)return 0;return 1;}
void check(int n,int *even,int *isprime,int *div){
    *even=(n%2==0);*isprime=prime(n);*div=(n%3==0||n%7==0);
}
int main(void){
    int n,e,p,d;scanf("%d",&n);check(n,&e,&p,&d);
    printf("Even=%d Prime=%d Divisible by 3 or 7=%d\n",e,p,d);return 0;
}
6A.1
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *a=malloc(10*sizeof(int));if(!a)return 1;
    for(int i=0;i<5;i++)scanf("%d",&a[i]);
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    free(a);return 0;
}
6A.2
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;scanf("%d",&n);if(n<1||n>100000)return 1;
    int *a=malloc((size_t)n*sizeof *a);if(!a)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=n-1;i>=0;i--)printf("%d ",a[i]);
    free(a);return 0;
}
6A.3
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;scanf("%d",&n);if(n<1||n>100000)return 1;
    int *a=calloc((size_t)n,sizeof *a);if(!a)return 1;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    free(a);return 0;
}
6B.1
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;scanf("%d",&n);if(n<1||n>100000)return 1;
    int *a=malloc((size_t)n*sizeof *a);if(!a)return 1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int mx=a[0];for(int i=1;i<n;i++)if(a[i]>mx)mx=a[i];
    printf("Maximum=%d\n",mx);free(a);return 0;
}
6B.2
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;scanf("%d",&n);if(n<1||n>100000)return 1;
    int *a=malloc((size_t)n*sizeof *a),*b=malloc((size_t)n*sizeof *b);
    if(!a||!b){free(a);free(b);return 1;}
    int k=0;long long sum=0;
    for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]!=0){b[k++]=a[i];sum+=a[i];}}
    for(int i=0;i<k;i++)printf("%d ",b[i]);
    if(k)printf("\nSum=%lld Average=%.2f\n",sum,(double)sum/k);
    else puts("\nNo non-zero elements");
    free(a);free(b);return 0;
}
6B.3
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;scanf("%d",&n);if(n<1||n>100000)return 1;
    int *a=malloc((size_t)n*sizeof *a);if(!a)return 1;
    long long sum=0;for(int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
    printf("Sum=%lld\n",sum);free(a);return 0;
}
6C.1
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int m,n;scanf("%d%d",&m,&n);if(m<1||n<1||m>1000||n>1000)return 1;
    int **a=malloc((size_t)m*sizeof *a);if(!a)return 1;
    for(int i=0;i<m;i++){a[i]=malloc((size_t)n*sizeof *a[i]);if(!a[i]){
        for(int k=0;k<i;k++)free(a[k]);free(a);return 1;}}
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int j=0;j<n;j++){long long sum=0;for(int i=0;i<m;i++)sum+=a[i][j];printf("Column %d sum=%lld\n",j+1,sum);}
    for(int i=0;i<m;i++)free(a[i]);free(a);return 0;
}
7A.1
#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000],copy[1000];
    if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\n")]=0;
    strcpy(copy,s);printf("%s\nLength=%zu\n",copy,strlen(copy));return 0;
}
7A.2
#include <stdio.h>
#include <string.h>
int main(void){
    char a[2000],b[1000];
    fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);
    a[strcspn(a,"\n")]=0;b[strcspn(b,"\n")]=0;
    int c=strcmp(a,b);
    if(c>0){strcat(a,b);puts(a);}
    else if(c<0){strcat(b,a);puts(b);}
    else printf("Length=%zu\n",strlen(a));
    return 0;
}
7A.3
#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000],ch;fgets(s,sizeof s,stdin);scanf(" %c",&ch);
    printf("%s\n",strchr(s,ch)?"Present":"Not present");return 0;
}
7B.1
#include <stdio.h>
#include <ctype.h>
int main(void){
    char s[1000];if(!fgets(s,sizeof s,stdin))return 1;
    for(int i=0;s[i];i++){
        unsigned char c=(unsigned char)s[i];
        if(c==' ')s[i]='*';
        else if(isupper(c))s[i]=(char)tolower(c);
        else if(islower(c))s[i]=(char)toupper(c);
        else if(isdigit(c))s[i]='?';
    }
    puts(s);return 0;
}
7B.2
#include <stdio.h>
int main(void){
    char s[1000];int len=0;
    if(!fgets(s,sizeof s,stdin))return 1;
    while(s[len]&&s[len]!='\n')len++;
    for(int i=len-1;i>=0;i--)putchar(s[i]);
    putchar('\n');return 0;
}
7B.3
#include <stdio.h>
#include <string.h>
int main(void){
    int ch;char a[1000],b[1000];
    do{
        printf("\n1.Length 2.Copy 3.Concatenate 4.Compare 5.Exit\n");scanf("%d",&ch);getchar();
        if(ch>=1&&ch<=4){
            printf("First string: ");fgets(a,sizeof a,stdin);a[strcspn(a,"\n")]=0;
        }
        switch(ch){
            case 1:printf("Length=%zu\n",strlen(a));break;
            case 2:strcpy(b,a);printf("%s\n",b);break;
            case 3:printf("Second string: ");fgets(b,sizeof b,stdin);b[strcspn(b,"\n")]=0;
                   if(strlen(a)+strlen(b)<sizeof a){strcat(a,b);puts(a);}else puts("Strings too long");break;
            case 4:printf("Compare=%d\n",strcmp(a,b));break;
            case 5:break;default:puts("Invalid choice");
        }
    }while(ch!=5);return 0;
}
8A.1
#include <stdio.h>
int stringLength(const char *s){int n=0;while(s[n])n++;return n;}
int main(void){char s[1000];fgets(s,sizeof s,stdin);int n=stringLength(s);if(n&&s[n-1]=='\n')n--;printf("Length=%d\n",n);return 0;}
8A.2
#include <stdio.h>
int main(void){
    char s[1000];int count=0;fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++)if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
       s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')count++;
    printf("Vowels=%d\n",count);return 0;
}
8A.3
#include <stdio.h>
char *toUpper(char *s){for(char *p=s;*p;p++)if(*p>='a'&&*p<='z')*p-=32;return s;}
int main(void){char s[1000];fgets(s,sizeof s,stdin);toUpper(s);printf("%s",s);return 0;}
8B.1
#include <stdio.h>
int compare(const char *a,const char *b){
    while(*a&&*a==*b){a++;b++;}
    return (unsigned char)*a-(unsigned char)*b;
}
int main(void){char a[1000],b[1000];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);
    int i=0;while(a[i]&&a[i]!='\n')i++;a[i]=0;i=0;while(b[i]&&b[i]!='\n')i++;b[i]=0;
    int c=compare(a,b);puts(c==0?"Equal":c<0?"First is smaller":"First is greater");return 0;}
8B.2
#include <stdio.h>
#include <string.h>
int main(void){
    char s[1000];fgets(s,sizeof s,stdin);int n=(int)strcspn(s,"\n"),ok=1;
    for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i]){ok=0;break;}
    puts(ok?"Palindrome":"Not a palindrome");return 0;
}
8B.3
#include <stdio.h>
int countChar(const char *s,char ch){int n=0;while(*s){if(*s==ch)n++;s++;}return n;}
int main(void){char s[1000],ch;fgets(s,sizeof s,stdin);scanf(" %c",&ch);printf("Count=%d\n",countChar(s,ch));return 0;}
8C.1
#include <stdio.h>
#include <string.h>
void reverse(char *s){int n=(int)strlen(s);for(int i=0;i<n/2;i++){char t=s[i];s[i]=s[n-1-i];s[n-1-i]=t;}}
int main(void){
    int choice;char a[2000],b[1000];
    do{
        printf("\n1.Copy 2.Concatenate 3.Length 4.Reverse 5.Exit\n");scanf("%d",&choice);getchar();
        if(choice>=1&&choice<=4){printf("String: ");fgets(a,sizeof a,stdin);a[strcspn(a,"\n")]=0;}
        switch(choice){
            case 1:strcpy(b,a);puts(b);break;
            case 2:printf("Second string: ");fgets(b,sizeof b,stdin);b[strcspn(b,"\n")]=0;
                   if(strlen(a)+strlen(b)<sizeof a){strcat(a,b);puts(a);}else puts("Strings too long");break;
            case 3:printf("Length=%zu\n",strlen(a));break;
            case 4:reverse(a);puts(a);break;
            case 5:break;default:puts("Invalid choice");
        }
    }while(choice!=5);return 0;
}
8C.2
#include <stdio.h>
#include <ctype.h>
int main(void){
    char s[1000];int seen[256]={0};fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++){
        unsigned char c=(unsigned char)tolower((unsigned char)s[i]);
        if(c=='\n'||seen[c])continue;
        seen[c]=1;int count=0;
        for(int j=0;s[j];j++)if(tolower((unsigned char)s[j])==c)count++;
        printf("Character %c occurs %d times\n",c,count);
    }
    return 0;
}
9A.1
#include <stdio.h>
typedef struct{int id;char name[100];double salary;}Employee;
int main(void){
    int n;Employee e[100];scanf("%d",&n);if(n<1||n>100)return 1;
    for(int i=0;i<n;i++){scanf("%d",&e[i].id);scanf(" %99[^\n]",e[i].name);scanf("%lf",&e[i].salary);}
    printf("ID\tName\tSalary\n");
    for(int i=0;i<n;i++)printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
    return 0;
}
9A.2
#include <stdio.h>
typedef struct{int day,month,year;}Date;
typedef struct{int id;char name[100];Date joining;}Employee;
int main(void){
    int n,month;Employee e[100];scanf("%d",&n);if(n<1||n>100)return 1;
    for(int i=0;i<n;i++){scanf("%d",&e[i].id);scanf(" %99[^\n]",e[i].name);scanf("%d%d%d",&e[i].joining.day,&e[i].joining.month,&e[i].joining.year);}
    scanf("%d",&month);
    for(int i=0;i<n;i++)if(e[i].joining.month==month)
        printf("%d %s %02d/%02d/%04d\n",e[i].id,e[i].name,e[i].joining.day,e[i].joining.month,e[i].joining.year);
    return 0;
}
9B.1
#include <stdio.h>
typedef struct{int no;char name[100];double rate;int qty;double total;}Item;
int main(void){
    int n;Item a[100];double grand=0;scanf("%d",&n);if(n<1||n>100)return 1;
    for(int i=0;i<n;i++){scanf("%d",&a[i].no);scanf(" %99[^\n]",a[i].name);scanf("%lf%d",&a[i].rate,&a[i].qty);a[i].total=a[i].rate*a[i].qty;grand+=a[i].total;}
    printf("Sr.No.\tItem Name\tRate\tQty\tTotal\n");
    for(int i=0;i<n;i++)printf("%d\t%s\t%.2f\t%d\t%.2f\n",a[i].no,a[i].name,a[i].rate,a[i].qty,a[i].total);
    printf("Grand Total: %.2f\n",grand);return 0;
}
9B.2
#include <stdio.h>
typedef struct{char title[100];char author[100];float price;int pages;}Book;
void display(Book b){printf("Title: %s\nAuthor: %s\nPrice: %.2f\nPages: %d\n",b.title,b.author,b.price,b.pages);}
int main(void){Book b;fgets(b.title,sizeof b.title,stdin);b.title[strcspn(b.title,"\n")]=0;
    fgets(b.author,sizeof b.author,stdin);b.author[strcspn(b.author,"\n")]=0;
    scanf("%f%d",&b.price,&b.pages);display(b);return 0;}
9C.1
#include <stdio.h>
typedef struct{char name[100];char street[100];char city[100];}Employee;
int main(void){
    Employee e[3];
    for(int i=0;i<3;i++){fgets(e[i].name,sizeof e[i].name,stdin);e[i].name[strcspn(e[i].name,"\n")]=0;
        fgets(e[i].street,sizeof e[i].street,stdin);e[i].street[strcspn(e[i].street,"\n")]=0;
        fgets(e[i].city,sizeof e[i].city,stdin);e[i].city[strcspn(e[i].city,"\n")]=0;}
    for(int i=0;i<3;i++)printf("%s, %s, %s\n",e[i].name,e[i].street,e[i].city);
    return 0;
}
10A.1
#include <stdio.h>
int main(void){
    char file[256],ch;int c,count=0;scanf("%255s",file);scanf(" %c",&ch);
    FILE *fp=fopen(file,"r");if(!fp){perror("File");return 1;}
    while((c=fgetc(fp))!=EOF)if(c==(unsigned char)ch)count++;
    fclose(fp);printf("Occurrences=%d\n",count);return 0;
}
10A.2
#include <stdio.h>
#include <ctype.h>
int main(void){
    char name[256];int c,space=0;scanf("%255s",name);
    FILE *in=fopen(name,"r");if(!in){perror("Input");return 1;}
    FILE *out=fopen("cleaned.txt","w");if(!out){fclose(in);perror("Output");return 1;}
    while((c=fgetc(in))!=EOF){
        if(isspace((unsigned char)c)){if(c=='\n'){fputc('\n',out);space=0;}else if(!space){fputc(' ',out);space=1;}}
        else{fputc(c,out);space=0;}
    }
    fclose(in);fclose(out);return 0;
}
10A.3
#include <stdio.h>
int main(void){
    char src[256],dst[256];int c;scanf("%255s%255s",src,dst);
    FILE *a=fopen(src,"rb");if(!a){perror("Source");return 1;}
    FILE *b=fopen(dst,"wb");if(!b){fclose(a);perror("Destination");return 1;}
    while((c=fgetc(a))!=EOF)fputc(c,b);
    fclose(a);fclose(b);return 0;
}
10A.4
#include <stdio.h>
#include <ctype.h>
int main(void){
    char name[256];int c,lines=0,chars=0,words=0,inword=0,last='\n';scanf("%255s",name);
    FILE *fp=fopen(name,"r");if(!fp){perror("File");return 1;}
    while((c=fgetc(fp))!=EOF){chars++;if(c=='\n')lines++;
        if(isspace((unsigned char)c))inword=0;else if(!inword){words++;inword=1;}last=c;}
    if(chars&&last!='\n')lines++;
    fclose(fp);printf("Lines=%d Words=%d Characters=%d\n",lines,words,chars);return 0;
}
10B.1
#include <stdio.h>
int main(void){
    char src[256];int n;scanf("%255s",src);
    FILE *in=fopen(src,"r");if(!in){perror("Input");return 1;}
    FILE *even=fopen("even.txt","w"),*odd=fopen("odd.txt","w");
    if(!even||!odd){if(even)fclose(even);if(odd)fclose(odd);fclose(in);return 1;}
    while(fscanf(in,"%d",&n)==1)fprintf(n%2==0?even:odd,"%d\n",n);
    fclose(in);fclose(even);fclose(odd);return 0;
}
10B.2
#include <stdio.h>
int main(void){
    char f1[256],f2[256];int a,b;scanf("%255s%255s",f1,f2);
    FILE *x=fopen(f1,"rb"),*y=fopen(f2,"rb");if(!x||!y){if(x)fclose(x);if(y)fclose(y);perror("File");return 1;}
    int same=1;do{a=fgetc(x);b=fgetc(y);if(a!=b){same=0;break;}}while(a!=EOF&&b!=EOF);
    fclose(x);fclose(y);puts(same?"Files are same":"Files are different");return 0;
}
11A.1
#include <stdio.h>
#define PI 3.141592653589793
int main(void){double r;scanf("%lf",&r);if(r<0)return 1;
    printf("Area=%.2f\nPerimeter=%.2f\n",PI*r*r,2*PI*r);return 0;}
11A.2
#include <stdio.h>
int main(int argc,char *argv[]){
    for(int i=argc-1;i>=1;i--)printf("%s\n",argv[i]);
    return 0;
}
11A.3
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    if(argc!=4){fprintf(stderr,"Usage: %s n1 n2 n3\n",argv[0]);return 1;}
    char *end;long a[3];
    for(int i=0;i<3;i++){a[i]=strtol(argv[i+1],&end,10);if(*end!='\0'){puts("Invalid integer");return 1;}}
    long min=a[0],max=a[0];for(int i=1;i<3;i++){if(a[i]<min)min=a[i];if(a[i]>max)max=a[i];}
    printf("Min=%ld Max=%ld Average=%.2f\n",min,max,(a[0]+a[1]+a[2])/3.0);return 0;
}
11A.4
#include <stdio.h>
#define MIN(a,b,c) (((a)<(b)) ? ((a)<(c)?(a):(c)) : ((b)<(c)?(b):(c)))
int main(void){int a,b,c;scanf("%d%d%d",&a,&b,&c);printf("Minimum=%d\n",MIN(a,b,c));return 0;}
11B.1
#include <stdio.h>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))
int main(void){double x;scanf("%lf",&x);printf("Square=%.2f\nCube=%.2f\n",SQUARE(x),CUBE(x));return 0;}
11B.2
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    if(argc!=3){fprintf(stderr,"Usage: %s number 1|2\n",argv[0]);return 1;}
    char *end;long n=strtol(argv[1],&end,10);if(*end!='\0'){puts("Invalid number");return 1;}
    int op=atoi(argv[2]);
    if(op==1){if(n<0||n>20){puts("Use n from 0 to 20");return 1;}unsigned long long f=1;for(long i=2;i<=n;i++)f*=i;printf("%llu\n",f);}
    else if(op==2)puts(n%2==0?"Even":"Odd");else puts("Second argument must be 1 or 2");
    return 0;
}
11B.3
#include <stdio.h>
int main(int argc,char *argv[]){
    if(argc!=3){fprintf(stderr,"Usage: %s source destination\n",argv[0]);return 1;}
    FILE *in=fopen(argv[1],"rb");if(!in){perror("Source");return 1;}
    FILE *out=fopen(argv[2],"wb");if(!out){perror("Destination");fclose(in);return 1;}
    int c;while((c=fgetc(in))!=EOF)if(fputc(c,out)==EOF){fclose(in);fclose(out);return 1;}
    fclose(in);fclose(out);return 0;
}
