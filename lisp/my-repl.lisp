(defun my-repl () (format t "~%my-repl>") 
		(print (eval (read)))
		(my-repl)
		)
