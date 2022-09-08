function manipulateStudentRecord(obj, operation, prop, newValue) {
    // write your code here
    if (operation === 'delete') {
        delete obj.prop;
        return obj;
    } else if (operation === 'edit') {
        obj[prop] = newValue;
        return obj;
    }
  }
  