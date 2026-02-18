#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int expense, total = 0, overspend = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &expense);
        total += expense;
        if(expense > 1000) {
            overspend++;
        }
    }
    printf("Total Expense: %d\n", total);
    printf("Overspend Days: %d\n", overspend);
    return 0;
}