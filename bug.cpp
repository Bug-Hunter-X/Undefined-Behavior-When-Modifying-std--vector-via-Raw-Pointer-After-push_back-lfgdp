std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
 vec.push_back(i); 
}
int* ptr = &vec[0];
for (int i = 0; i < 10; ++i) { 
  ptr[i] = i * 2; 
}
//This code may cause undefined behavior. Modifying a vector through a raw pointer after calling push_back may cause problems, because the vector may reallocate its internal array, invalidating the pointer.