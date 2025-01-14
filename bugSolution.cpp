std::vector<int> vec; 
for (int i = 0; i < 10; ++i) { 
 vec.push_back(i); 
}
for (int i = 0; i < vec.size(); ++i) { 
 vec[i] = i * 2; // Or use iterators for better safety 
}
//This code is safe. It uses the vector's indexing operator, which is designed to handle reallocations.