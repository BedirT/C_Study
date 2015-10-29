var foodSet = Set(["Salad", "Chips", "Sandwiches"])

var items = Set(["Chips", "Sandwiches", "Water"])

items.isSubsetOf(foodSet)

Should return true if all ingredients are present

false if one ingredient is missing

** Need only one loop for checking receipts