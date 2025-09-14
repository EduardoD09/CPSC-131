import GroceryItem;

int main() {
  try {
    // Create a GroceryItem object
    GroceryItem item("Product Name", "Brand Name", "123456789012", 9.99);

    // Display the GroceryItem object
    std::print("{}\n", item);

    // Create another GroceryItem object using the extraction operator
    GroceryItem item2;
    std::print("Enter a grocery item (UPC Code, Brand Name, Product Name, Price): ");
    std::cin >> item2;
    std::print("{}\n", item2);

    // Compare two GroceryItem objects
    std::print("{} == {}: {}\n", item, item2, item == item2);

  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }

  return 0;
}