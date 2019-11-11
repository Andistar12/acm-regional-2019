#D1: UO Off by One

n = int(input())
hor = list()
ver = list()
pts = set()
for i in range(n):
    line = input().split(" ")
    a = int(line[1])
    b = int(line[2])
    c = int(line[3])
    if line[0] is "h":
        hor.append( (a,b,c) )
    else:
        ver.append( (a,b,c) )

def onSegment(p, q, r):
    if (q[0] <= max(p[0], r[0]) and q[0] >= min(p[0], r[0])) and (q[1] <= max(p[1], r[1]) and q[1] >= min(p[1], r[1])):
        return True
    return False
def orientation(p, q, r):
    val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    if val == 0:
        return 0
    if val > 0:
        return 1
    return 2
def doIntersect(p1, q1, p2, q2):
    o1 = orientation(p1, q1, p2)
    o2 = orientation(p1, q1, q2)
    o3 = orientation(p2, q2, q1)
    o4 = orientation(p2, q2, q1)
    if (o1 != o2 and o3 != o4):
        return True
    if (o1 == 0 and onSegment(p1, p2, q1)):
        return True
    if (o2 == 0 and onSegment(p1, q2, q1)):
        return True
    if (o3 == 0 and onSegment(p2, p1, q2)):
        return True
    if (o4 == 0 and onSegment(p2, q1, q2)):
        return True
    return False

for h in hor:
    for v in ver:
        t1 = v[2] - 1 + h[0]
        t2 = t1 + h[1]
        t3 = h[2] - 1 + v[0]
        t4 = t3 + v[1]

        if (t1 <= t3 <= t2 or t1 <= t4 <= t2):
            pts.add( (h[2], v[2]) )

print(len(pts))
