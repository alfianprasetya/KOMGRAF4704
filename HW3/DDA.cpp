#include <bits/stdc++.h> 

using namespace std; 
 
void DDALine(int x0, int y0, int x1, int y1) 
{ 
  
    // menghitung dx and dy 
    int dx = x1 - x0; 
    int dy = y1 - y0; 
  
    // menghitung langkah
    int step; 
    if (abs(dx) > abs(dy)) 
        step = abs(dx); 
    else
        step = abs(dy); 
  
    // Calculate x-increment and y-increment for each step 
    float x_incr = (float)dx / step; 
    float y_incr = (float)dy / step; 
   
    float x = x0; 
    float y = y0; 

    cout << "jumlah step = " << step << endl;
  
    for (int i = 0; i < step; i++) { 

        cout << "titik ke-" << i + 1 << " : " << round(x) << " " << round(y) << "\n"; 
        x += x_incr; 
        y += y_incr;  
    } 
} 

int main() 
{ 
    cout << " DDA Line Algorithm " << endl;
    cout << "===================" << endl;

    int x0, y0, x1, y1;

    cout << "Masukkan nilai x0 : ";
    cin >> x0;
    cout << "Masukkan nilai y0 : ";
    cin >> y0;
    cout << "Masukkan nilai x1 : ";
    cin >> x1;
    cout << "Masukkan nilai y1 : ";
    cin >> y1;
   
    DDALine(x0, y0, x1, y1); 
  
    return 0; 
} 