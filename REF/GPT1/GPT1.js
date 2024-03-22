document.addEventListener('DOMContentLoaded', function() {
    const homeLink = document.getElementById('home');
    const coursesLink = document.getElementById('courses');
    const gradesLink = document.getElementById('grades');
    const contentDiv = document.getElementById('content');

    // Add event listeners to navigation links
    homeLink.addEventListener('click', function(event) {
        event.preventDefault();
        showContent('Home Page Content');
    });

    coursesLink.addEventListener('click', function(event) {
        event.preventDefault();
        showContent('List of Courses');
    });

    gradesLink.addEventListener('click', function(event) {
        event.preventDefault();
        showContent('Grades Information');
    });

    // Function to dynamically show content
    function showContent(content) {
        contentDiv.textContent = content;
    }
});
