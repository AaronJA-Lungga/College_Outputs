function togglePopup() {
    var popup = document.getElementById('popup');
    popup.style.display = (popup.style.display === 'block') ? 'none' : 'block';
}

var deleteMode = false;
        document.getElementById("openPopup2").addEventListener("click", function() {
            document.getElementById("popup2").style.display = "block";
        });

document.getElementById("submitButton").addEventListener("click", function() {
    var inputValue = document.getElementById("inputField").value;
    var newDiv = document.createElement("div");
    newDiv.classList.add("subjects");
    newDiv.textContent = inputValue;
    document.querySelector('.subject-left').appendChild(newDiv);
    document.getElementById("popup2").style.display = "none";
});

document.getElementById("deleteBtn").addEventListener("click", function() {
    deleteMode = !deleteMode;
    var deleteBtn = document.getElementById("deleteBtn");
    var subjectLeft = document.querySelector('.subject-left');
    if (deleteMode) {
        deleteBtn.style.backgroundColor = "red"; 
        subjectLeft.classList.add("delete-mode"); 
        var subjects = document.querySelectorAll('.subject-left .subjects');
        subjects.forEach(function(subject) {
            subject.addEventListener("click", deleteSelectedDiv);
        });
    } else {
        deleteBtn.style.backgroundColor = ""; 
        subjectLeft.classList.remove("delete-mode"); 
        var subjects = document.querySelectorAll('.subject-left .subjects');
        subjects.forEach(function(subject) {
            subject.removeEventListener("click", deleteSelectedDiv);
        });
    }
});

function deleteSelectedDiv(event) {
    if (event.target.classList.contains("selected")) {
        event.target.remove();
    } else {
        var subjects = document.querySelectorAll('.subject-left .subjects');
        subjects.forEach(function(subject) {
            subject.classList.remove("selected");
        });
        event.target.classList.add("selected");
    }
}
