function inventoryList() {
  // write your code here
  class Inventory{
      constructor() {
          this.collection = [];
      }
  
    add(stringName) {
        this.collection.push(stringName);
    }
    
    remove(stringName) {
        let index = this.collection.indexOf(stringName);
        this.collection.splice(index,1)
    }
    
    getList() {
        return this.collection;
    }
  }
  
  return new Inventory();
}