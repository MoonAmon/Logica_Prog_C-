function createMatrix(cols, rows) {
    const matrix = [];
    var cont = " ";
    for (let i = 0; i < rows; i++) {
        const row = [];
        for (let j = 0; j < cols; j++) {
           row.push(cont) 
        }
        matrix.push(row)
    }
    return matrix;
    
}

function createBoard() {
const matrix = createMatrix(3, 3)

const table = document.createElement("table");

for (let i = 0; i < matrix.length; i++) {
    const row = document.createElement("tr");
    for (let j = 0; j < matrix[i].length; j++) {
        const cell = document.createElement("td");
        cell.textContent = matrix[i][j];
        cell.style.width = "50px";
        cell.style.height = "50px";
        cell.style.border = "1px solid black";
        cell.addEventListener("click", function() {
            if (cell.textContent != "X" && cell.textContent != "O") {
                cell.textContent = "X";
            } else if (cell.textContent == "X") {
                cell.textContent = "O";
            } else {
                cell.textContent = "X";
            }
        })
        row.appendChild(cell);
    }
    table.appendChild(row);
}
document.body.appendChild(table);
}

createBoard();

