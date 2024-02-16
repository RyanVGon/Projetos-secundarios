class Tree {
  constructor(_root) {
    this.root = _root;
  }

  query() {
    this.root.query();
  }
}

class Node {
  constructor() {
    this.value = null;
    this.qtd = 0;
    this.left = null;
    this.right = null;
    this.divided = false;
  }

  insert(val) {
    if (this.value == null) {
      this.value = val;
      this.qtd++;
      return;
    } else if (!this.divided) {
      this.divide();
    }
    if (val < this.value) {
      this.left.insert(val);
    } else if (val > this.value) {
      this.right.insert(val);
    } else if (val == this.value) {
      this.qtd++;
    }
  }

  divide() {
    this.right = new Node();
    this.left = new Node();
    this.divided = true;
  }

  query() {
    if (this.left && this.left.value != null) {
      this.left.query();
    }
    console.log(this.value + " : " + this.qtd);
    if (this.right && this.right.value != null) {
      this.right.query();
    }
  }
}
