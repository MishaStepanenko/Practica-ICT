#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double dx = x2 - x1;
    double dy = y2 - y1;
    double dist = sqrt(dx * dx + dy * dy);

    if (dist == 0) {
        if (r1 == r2) {
            printf("-1\n");  // Безкінечно багато точок (совпадаючі кола)
        } else {
            printf("0\n");   // Центри співпадають, радіуси різні - немає точок перетину
        }
    } else {
        if (dist > r1 + r2) {
            printf("0\n");  // Кола занадто далеко
        } else if (dist == r1 + r2) {
            printf("1\n");  // Дотикаються зовнішнім колом
        } else if (dist < fabs(r1 - r2)) {
            printf("0\n");  // Одне коло всередині іншого, без дотику
        } else if (dist == fabs(r1 - r2)) {
            printf("1\n");  // Дотикаються внутрішнім колом
        } else {
            printf("2\n");  // Перетинаються в двох точках
        }
    }

    return 0;
}
