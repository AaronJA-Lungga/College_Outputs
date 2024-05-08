document.getElementById('editForm').addEventListener('submit', function(event) {
    event.preventDefault();
    const day = document.getElementById('day').value;
    const time = document.getElementById('time').value;
    const subject = document.getElementById('subject').value;

    // Here you can send the data to a backend server for saving or update it in some other way

    alert(`Schedule updated: ${day} - ${time}: ${subject}`);
});
