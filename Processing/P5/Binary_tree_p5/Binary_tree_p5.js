function setup() {
  tree = new Tree(new Node());
  for(let i = 0; i < 10; i++){
    let temp = floor(random(0,100));
    tree.root.insert(temp);
  }
  console.log(tree);
  tree.query();
}


function draw() {

}
