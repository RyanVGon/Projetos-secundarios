import pygame
import concurrent.futures
from Cells import Cells
import threading
from pygame.draw import *
#from draw import *

pygame.init()
screen = pygame.display.set_mode((1280, 720))
width = screen.get_width()
height = screen.get_height()
clock = pygame.time.Clock()
#draw = pygame.draw
running = True
paused = True


paint_color = 1
cells = []
numThread = 2
threads = []
new_cells = []
cells_size = 20
cols = int(width / cells_size)
rows = int(height / cells_size)



def update(startCols, endCols, startRows, endRows):
    for i in range(startCols, endCols):
            for j in range(startRows, endRows):
                cell_rules = new_cells[i][j]
                starting = cell_rules
                
                while rules.get(cell_rules, -1) == -1:
                    first_char = cell_rules[0]
                    cell_rules = cell_rules[1:]
                    cell_rules = (cell_rules * 3)[len(cell_rules) - 1 : 2 * len(cell_rules) -1]
                    cell_rules = first_char + cell_rules
                    if cell_rules == starting:
                        break
                new_cells[i][j] = cell_rules

def change_state(startCols, endCols, startRows, endRows):
    for i in range(startCols, endCols):
            for j in range(startRows, endRows):
                cells[i][j].state = rules.get(new_cells[i][j], cells[i][j].state)

def draw_squares(startCols, endCols, startRows, endRows):
    for i in range(startCols, endCols):
            for j in range(startRows, endRows):
                cells[i][j].show(screen, False)

def get_rules(startCols, endCols, startRows, endRows):
    for i in range(startCols, endCols):
            for j in range(startRows, endRows):
                if not paused:
                    new_cells[i][j] = cells[i][j].get_current_rules(cells, rows, cols)

for i in range(cols):
    row = []
    new_row = []
    for j in range(rows):
        row.append(Cells(i,j,cells_size,cells_size))
        new_row.append("")
    cells.append(row)
    new_cells.append(new_row)

rules = {
    '00000':	0,
    '00001':	0,
    '00003':	1,
    '00042':	0,
    '00011':	0,
    '00012':	0,
    '00031':	1,
    '00033':	0,
    '00032':	0,
    '00020':	0,
    '00024':	2,
    '00023':	3,
    '00433':	0,
    '00512':	0,
    '00140':	0,
    '00112':	0,
    '00130':	5,
    '00131':	0,
    '00132':	0,
    '00302':	0,
    '00340':	0,
    '00342':	0,
    '00312':	0,
    '00204':	0,
    '00205':	0,
    '00201':	0,
    '00202':	0,
    '00242':	0,
    '00250':	0,
    '00252':	0,
    '00220':	0,
    '00225':	0,
    '00222':	0,
    '04000':	0,
    '05000':	0,
    '05050':	0,
    '01005':	2,
    '01002':	2,
    '01040':	0,
    '01010':	0,
    '02005':	5,
    '40023':	3,
    '40523':	5,
    '40123':	3,
    '44202':	4,
    '45202':	0,
    '41523':	3,
    '41123':	3,
    '41202':	4,
    '41253':	3,
    '43202':	4,
    '42143':	3,
    '42231':	3,
    '50130':	2,
    '50223':	0,
    '54002':	2,
    '54200':	2,
    '51202':	4,
    '53002':	5,
    '52002':	5,
    '52044':	2,
    '52324':	2,
    '52202':	0,
    '10000':	0,
    '10001':	0,
    '10003':	3,
    '10033':	0,
    '10123':	3,
    '10340':	1,
    '10324':	4,
    '11124':	4,
    '11324':	4,
    '11240':	4,
    '13324':	4,
    '12135':	1,
    '12344':	4,
    '12354':	3,
    '12241':	4,
    '12243':	4,
    '30010':	0,
    '30030':	0,
    '30021':	1,
    '30023':	3,
    '30423':	3,
    '30110':	0,
    '30121':	1,
    '30321':	1,
    '30323':	3,
    '30223':	3,
    '34423':	3,
    '34323':	3,
    '35120':	2,
    '35321':	5,
    '31423':	3,
    '31123':	3,
    '31325':	1,
    '31321':	1,
    '31221':	1,
    '33522':	3,
    '33321':	1,
    '32053':	3,
    '32443':	3,
    '32541':	5,
    '32143':	3,
    '32151':	1,
    '32132':	1,
    '32341':	1,
    '20000':	0,
    '20004':	2,
    '20003':	2,
    '20002':	2,
    '20044':	2,
    '20051':	5,
    '20011':	2,
    '20012':	2,
    '20034':	2,
    '20033':	2,
    '20024':	2,
    '20021':	2,
    '20150':	2,
    '20320':	2,
    '20230':	2,
    '24402':	2,
    '24502':	2,
    '24204':	2,
    '24202':	2,
    '25420':	2,
    '25504':	2,
    '25202':	5,
    '21004':	2,
    '21402':	2,
    '21502':	2,
    '21205':	5,
    '21202':	2,
    '23005':	2,
    '23402':	2,
    '23500':	2,
    '23502':	2,
    '23204':	2,
    '23202':	2,
    '22004':	2,
    '22002':	0,
    '22053':	3,
    '22155':	2
}

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


while running:
    for event in pygame.event.get():
        if pygame.mouse.get_pressed()[0]:
            if paused:
                mouse_pos = pygame.mouse.get_pos()
                i = int(mouse_pos[0]  / cells_size)
                j = int(mouse_pos[1] / cells_size)

                i = max(0, min(i, cols-1))
                j = max(0, min(j, rows-1))
                cells[i][j].state = paint_color
            
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                paused = not paused
            if event.key >= 48 and event.key <= 55:
                paint_color = event.key - 48
        if event.type == pygame.QUIT:
            running = False

    screen.fill("black")
    
    if __name__ == '__main__':
        pool = concurrent.futures.ThreadPoolExecutor(max_workers=numThread*10)
        for i in range(numThread):
            pool.submit(draw_squares(int(cols/numThread)*i,int(cols/numThread)*(i+1),0,rows))
            pool.submit(get_rules(int(cols/numThread)*i,int(cols/numThread)*(i+1),0,rows))

    if not paused:
        if __name__ == '__main__':

            for i in range(numThread):
                pool.submit(update(int(cols/numThread)*i,int(cols/numThread)*(i+1),0,rows))

            for i in range(numThread):
                pool.submit(change_state(int(cols/numThread)*i,int(cols/numThread)*(i+1),0,rows))
            pool.shutdown(wait=True)

    else:
        
        ball_radius = 12
        ball_color = colors[paint_color]
        circle(screen, ball_color, pygame.mouse.get_pos(), ball_radius, 4)


    pygame.key.key_code("space") == pygame.K_SPACE
    #line(screen, "blue", (width/2, 0), (width/2, height))
    #line(screen, "blue", (0, height/2), (width, height/2))
    
    
    pygame.display.flip()
    clock.tick()
    print(clock.get_fps())
      # limits FPS to 60
    #

pygame.quit()