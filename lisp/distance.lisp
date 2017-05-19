(defun square(x)
  (* x x))

(defun distance(a b c x y z)
  (sqrt ( + (square(- x a)) (square(- y b)) (square(- z c)))))
