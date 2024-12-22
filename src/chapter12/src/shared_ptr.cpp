#include <memory>
#include <iostream>

int main() {
  /****************************************************************
   *                        shared_ptr                            *
   ****************************************************************/

  /* The safest way to allocation and use dynamic memory is to call a library
   function named make_shared. This function allocates and initializes an object
   in dynamic memory and returns a shared_ptr that points to that object. */
  std::shared_ptr<int> p1 = std::make_shared<int>(42);
  std::cout << "p1 reference count: " << p1.use_count() << std::endl;
  std::shared_ptr<int> p2 = p1;
  std::cout << "p1 reference count (after p2 copying): " << p1.use_count()
            << std::endl;
  p2.reset();
  std::cout << "p1 reference count (after p2 reset): " << p1.use_count()
            << std::endl;

  /****************************************************************
   *                         weak_ptr                             *
   ****************************************************************/

  std::weak_ptr<int> wp = p1;
  std::cout << "p1 reference count (after weak ptr initialization): "
            << p1.use_count() << std::endl;

  /* The smart pointer constructors that take pointers are explicit. Cannot
    implicitly convert a buit-in pointer to smart pointer */

  // Error: cannot convert int* to shared_ptr<int>
  // std::shared_ptr<int> p3 = new int(1024);  
  
  // Ok: explicit conversion from int* to shared_ptr<int>
  // std::shared_ptr<int> p3(new int(1024));

  return 0;
}