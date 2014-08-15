set encoding iso_8859_1
set grid
set key top left
set title "Desempenho de duas funções"
set xtics rotate by 90
set xrange [0:500]
set xlabel 'Tamanho do vetor'
set ylabel 'Tempo (segundos)'

plot 'saida.txt' using 1:2 t 'Funcao1' with linespoints, \
     'saida.txt' using 3:4 t 'Funcao2' with linespoints

set terminal png
set output 'grafico.png'

replot
