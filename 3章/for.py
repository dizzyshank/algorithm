import time

N = 100000  # 固定値を使用

def f1():
    for i in range(1, N+1):
        pass

start_time = time.time()  # 計測開始時間
f1()  # 計測したい関数の呼び出し
end_time = time.time()  # 計測終了時間
execution_time = end_time - start_time  # 実行時間の計算

print(f"Execution time: {execution_time} seconds")  # 実行時間の表示
