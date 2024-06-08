<h1>Files that implement the mountainOS API</h1>

<p1>mos.c - implements the functions:</p1>
<ul>
  <li><strong>exit</strong> - This function terminates the program with the code you write in the argument <b>code</b>. <i>exit(3) - exit the program with code 3</i></li>
  <li><strong>fork</strong> - Creates a new process by copying the calling process. The new (copied) process is called the <b>child process</b>, and the process that called the <i>fork()</i> function is called the <b>parent process</b>.</li>
  <li><strong>read</strong> - attempts to read the number of bytes written, the number of which is written in the <b>third argument __nbytes</b> from the <i>file descriptor</i> under the <b>first argument __fd</b> starting with the <b>second argument __buf</b></li>
</ul>
