class ball {

  constructor() {
    this.x = width/2; 
    this.y = height/2; 
    this.xspeed = random(-5, 5); 
    this.yspeed = random(-5, 5); 
    this.diameter = 20;
    this.hue = random(255);

  }

  move() {
    fill(this.hue, 100, 255);
    circle(this.x, this.y, this.diameter);

    if (this.x + this.diameter > width) {
      this.x = width - this.diameter;
      this.xspeed = this.xspeed * -1;
    } else if (this.x - this.diameter < 0) {
      this.x = 0 + this.diameter;
      this.xspeed = this.xspeed * -1;
    }



    if (this.y + this.diameter > height) {
      this.y = height - this.diameter;
      this.yspeed = this.yspeed * -1;
    } else if (this.y - this.diameter < 0) {
      this.y = 0 + this.diameter;
      this.yspeed = this.yspeed * -1;
    }
    this.y += this.yspeed;
    this.x += this.xspeed;
  }
}
