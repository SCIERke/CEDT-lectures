#include <iostream>
#include <string>
#include <cmath>

int red_section_days(int d , int m ,int y) {
  y -= 543;
  int days = 0;

  int days_inyear = 365;

   if ( y % 400 == 0) {
      days_inyear = 366;
    }
    if ( y % 4  == 0 && y % 100 != 0) {
      days_inyear = 366;
    }
  for (int i = 1 ; i < m; i++) {
    int n = 31;
    if ( i == 4 || i == 6 || i == 9 || i == 11) {
      n = 30;
    } else {
      if (i == 2) {
        n = 28;
        if ( y % 400 == 0) {
          n = 29;
        }
        if ( y % 4  == 0 && y % 100 != 0) {
          n = 29;
        }
      }
    }
    days += n;
  }
  days += d;


  return days_inyear - days + 1;
}

int blue_section_days(int d ,int m ,int y) {
  y -= 543;

  int days = 0;

  for (int i = 1 ; i < m; i++) {
    int n = 31;
    if ( i == 4 || i == 6 || i == 9 || i == 11) {
      n = 30;
    } else {
      if (i == 2) {
        n = 28;
        if ( y % 400 == 0) {
          n = 29;
        }
        if ( y % 4  == 0 && y % 100 != 0) {
          n = 29;
        }
      }
    }
    days += n;
  }
  days += d;
  return days -1;
}

int main() {
  int d_start , m_start , y_start, d_end , m_end , y_end;

  std::cin >> d_start >> m_start >> y_start >> d_end >> m_end >> y_end;

  int red_section = red_section_days(d_start ,m_start , y_start);
  int black_section = (y_end - y_start - 1)*365;
  int blue_section = blue_section_days(d_end ,m_end , y_end);


  int totalDays = red_section + black_section + blue_section;

  std::cout << totalDays << " ";

  double top = 2*M_PI*totalDays;

  double physical = sin(top/23);
  double emotional = sin(top/28);
  double intellectual = sin(top/33);

  std::cout << round(physical*100.0)/100.0 << " " << round(emotional*100.0)/100.0 << " " << round(intellectual*100.0)/100.0;
  return 0;
}