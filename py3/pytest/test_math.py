# pytest for testing
# vscode 左侧栏试剂瓶图标
def add(x, y):
  return x + y

def substract(x, y):
  return x - y

def inc(x):
  return x + 1

def test_add():
  assert add(1, 2) == 3

def test_substract():
  assert substract(1, 2) == -1

def test_inc():
  assert inc(1) == 2
