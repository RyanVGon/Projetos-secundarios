from pygame.draw import rect
class Cells:

    colors = {
        0: "black",
        1: "blue",
        2: "red",
        3: "green",
        4: "yellow",
        5: "magenta",
        6: "white",
        7: "cyan"
    }


    def __init__(self, i, j, width, height, state = 0):
        self.i = i
        self.j = j
        self.pos = {"x":i*width, "y":j*height}
        self.width = width
        self.height = height
        self.state = state


    def show(self, screen, outline = True):
        if self.state != 0:
            rect(screen,self.colors[self.state], [self.pos["x"], self.pos["y"], self.width, self.height]) #draw the interior color
            if outline:
                rect(screen,"light gray", [self.pos["x"], self.pos["y"], self.width, self.height], 1) #draw the gray outline


    def get_current_rules(self, board, rows, cols):
        # format: CNESWC'
        
        current = self.state
        north = board[self.i][self.j-1].state
        east = board[(self.i+1) % cols][self.j].state
        south = board[self.i][(self.j+1) % rows].state
        west = board[self.i-1][self.j].state
        
        rule = str(current) + str(north) + str(east) + str(south) + str(west)
        return rule
