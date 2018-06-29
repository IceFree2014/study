#include <iostream>
using namespace std;

/* cin: 
    used to read from the standard input device,which is usually the keyboard
    use cin in combination with the extraction operator (>>) 取出操作符 */
int main()
{
    int num;
    cout << "Please enter a number\n";
    cin >> num;/* extraction operator extract data form standrad input to num */
    cout << num << endl;
    int a, b;
    cout << "Please enter two numbers\n";
    cin >> a >> b;/* extraction data form standrad to a and b */
    cout << a << " " << b << endl;
    int sum = a + b;
    cout << "sum = " << sum << endl;
    
    return 0;
}
