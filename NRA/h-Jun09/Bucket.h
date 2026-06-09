#ifndef SENECA_BUCKET_H
#define SENECA_BUCKET_H
#include <iostream>
namespace seneca {
   class Bucket {
      double m_value{};
      double m_capacity{ 10.00 };
      double junk{};
   public:
      Bucket() = default;
      Bucket(double value, double capacity = 15);
      /// <summary>
      /// displays the Bucket
      /// </summary>
      /// <returns>ostream reference</returns>
      std::ostream& operator~()const;
      // operator overaload are always created using their function form.
      Bucket& operator=(const double& value);
      double operator+=(double value);
      Bucket operator+(double value)const;
      Bucket& operator++();
      // the int is NOT and argument, it is flag to idicates
      // this is a post fix operator
      Bucket operator++(int);
      // type conversion overload 
      // type cast overload
      operator double()const;
      double operator[](int index) const;
      double& operator[](int index);

   };

}
#endif // !SENECA_BUCKET_H
