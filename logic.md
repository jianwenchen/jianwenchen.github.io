一个直接证明法的例子：

求证：设$x, y, z$为任意三个非负有理数，则$(x + y) + z = x + (y + z)$。

证明：
  设$x=\frac{a}{b}$，$y=\frac{c}{d}$，$z=\frac{e}{f}$，其中$a$，$c$，$e$为自然数，$b$，$d$，$f$为正整数，
  则
  $$
  \begin{align*}
    (x + y) + z&=(\frac{a}{b}+\frac{c}{d})+\frac{e}{f}\\
               &=\frac{ad+bc}{bd}+\frac{e}{f}\\
    &=\frac{adf+bcf+bde}{bdf}\\
    x + (y + z)&=\frac{a}{b}+(\frac{c}{d}+\frac{e}{f})\\
               &=\frac{a}{b} + \frac{cf + de}{df}\\
    &=\frac{adf+bcf+bde}{bdf}    
  \end{align*}
  $$
  这证明了$(x + y) + z = x + (y + z)$。