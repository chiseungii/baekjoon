import queue
import sys

if __name__ == "__main__":
    N = int(sys.stdin.readline())
    heap = queue.PriorityQueue()

    for i in range(N):
        x = int(sys.stdin.readline())

        if x == 0:
            if heap.empty(): sys.stdout.write("0\n")
            else: sys.stdout.write(f"{-heap.get()}\n")
        else: heap.put(-x)
