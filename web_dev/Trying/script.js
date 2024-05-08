// Function to get the current day and time
function getCurrentDayAndTime() {
    const now = new Date();
    const day = now.toLocaleDateString('en-US', { weekday: 'long' });
    const time = now.toLocaleTimeString('en-US', { hour12: true, hour: '2-digit', minute: '2-digit' });
    return { day, time };
}

// Function to filter schedule items by day and time
function filterSchedule(scheduleData, currentDay, currentTime) {
    return scheduleData.filter(item => item.day === currentDay && item.time === currentTime);
}

// Function to display filtered schedule
function displayFilteredSchedule(filteredSchedule) {
    const scheduleElement = document.getElementById('schedule');
    scheduleElement.innerHTML = '';
    if (filteredSchedule.length === 0) {
        const message = document.createElement('p');
        message.textContent = 'No classes scheduled at this time.';
        scheduleElement.appendChild(message);
    } else {
        filteredSchedule.forEach(item => {
            const scheduleItem = document.createElement('div');
            scheduleItem.textContent = `${item.day} - ${item.time}: ${item.subject}`;
            scheduleElement.appendChild(scheduleItem);
        });
    }
}

// Fetch and display full schedule
// You can fetch data from a backend server here
// Example: fetch('/schedule').then(response => response.json()).then(data => displayFullSchedule(data));

function displayFullSchedule(fullSchedule) {
    const { day, time } = getCurrentDayAndTime();
    const filteredSchedule = filterSchedule(fullSchedule, day, time);
    displayFilteredSchedule(filteredSchedule);
}

// Example full schedule data
const fullSchedule = [
    { day: 'Monday', time: '10:00 AM', subject: 'Math' },
    { day: 'Monday', time: '1:00 PM', subject: 'History' },
    { day: 'Tuesday', time: '11:00 AM', subject: 'Science' },
    // Add more schedule items here...
];

// Display full schedule
displayFullSchedule(fullSchedule);

// Update schedule every minute
setInterval(function() {
    const { day, time } = getCurrentDayAndTime();
    const filteredSchedule = filterSchedule(fullSchedule, day, time);
    displayFilteredSchedule(filteredSchedule);
}, 60000); // Update every minute
