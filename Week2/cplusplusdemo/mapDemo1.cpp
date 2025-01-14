/** @file mapDemo1.cpp
 *  @brief Map Demo
 *  
 *  Maps are associative containers that store elements in a mapped fashion. 
 *  Each element has a key value and a mapped value. No two mapped values can have the same key values.
 * 
 *  Some basic functions associated with Map: 

 *  begin() � Returns an iterator to the first element in the map.
 *  end() � Returns an iterator to the theoretical element that follows the last element in the map.
 *  size() � Returns the number of elements in the map.
 *  max_size() � Returns the maximum number of elements that the map can hold.
 *  empty() � Returns whether the map is empty.
 *  pair insert(keyvalue, mapvalue) � Adds a new element to the map.
 *  erase(iterator position) � Removes the element at the position pointed by the iterator.
 *  erase(const g)� Removes the key-value �g� from the map.
 *  clear() � Removes all the elements from the map.
 * 
 *  @author Hooman Salamat
 *  @bug No known bugs.
 */




#include <iostream>
#include <map>

int main()
{
    // Create a map of strings to integers
    std::map<std::string, int> map;

    // Insert some values into the map
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    // Get an iterator pointing to the first element in the map
    std::map<std::string, int>::iterator it = map.begin();

    // Iterate through the map and print the elements
    while (it != map.end())
    {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        ++it;
    }

    // Print the size of the map
    std::cout << "Size of map: " << map.size() << std::endl;

    // Check if a key is in the map
    if (map.count("four") > 0)
    {
        std::cout << "Key 'four' is in the map" << std::endl;
    }
    else
    {
        std::cout << "Key 'four' is not in the map" << std::endl;
    }

    return 0;
}