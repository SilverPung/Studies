#include <stdio.h>
#include <math.h>
#define PI 3.1415
void func(double radians){
    double si,co,tn;
    tn=tan(radians);
    co=cos(radians);
    si=sin(radians);
    printf("Sin wynosi %.4lf,Cos wynosi %.4lf,Tan wynosi %.4lf",si,co,tn);


}
int main() {
    double degrees;

    printf("Podaj kąt:");
    scanf("%lf", &degrees);

 
    double radians = degrees * (PI / 180.0);
    func(radians);

    return 0;
}
