const taskInput = document.getElementById("task-input");
const taskForm = document.getElementById("task-form");
const taskList = document.getElementById("task-list");

taskForm.addEventListener("submit", (e) => {
    e.preventDefault();
    const taskTitle = taskInput.value;
    console.log(taskTitle);

    if (taskTitle == "") {
        alert("Please Enter Task");
    } else {
        const listItem = document.createElement("li");
        listItem.innerHTML = taskTitle;
        taskList.append(listItem);
        let span = document.createElement("span");
        span.innerHTML = `&times;`;
        listItem.appendChild(span);
        taskInput.value = "";
        saveListData();
    }
});

taskList.addEventListener("click", (e) => {
    if (e.target.tagName == "LI") {
        e.target.classList.toggle("checked");
        saveListData();
    }

    if (e.target.tagName == "SPAN") {
        const li = e.target.parentElement;
        li.remove();
        saveListData();
    }
});

function showListData() {
    taskList.innerHTML = localStorage.getItem("listItem");
}

function saveListData() {
    localStorage.setItem("listItem", taskList.innerHTML);
}

showListData();

//Calendar
const header = document.querySelector('.calendar-main h3');
const dates=document.querySelector('.dates');
const navs = document.querySelectorAll('#prev, #next');

const months = [
    "January","February","March", "April", "May", "June", "July", "August","September","October", "November", "December",
]

let date = new Date();
let month = date.getMonth();
let year = date.getFullYear();

function renderCalendar(){
    header.textContent = `${months[month]} ${year}`;
}
    

renderCalendar();