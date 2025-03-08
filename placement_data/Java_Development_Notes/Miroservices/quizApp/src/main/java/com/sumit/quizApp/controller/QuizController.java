package com.sumit.quizApp.controller;

import com.sumit.quizApp.model.QuestionWrapper;
import com.sumit.quizApp.model.Response;
import com.sumit.quizApp.service.QuizService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("quiz")
public class QuizController {

    @Autowired
    public QuizService quizService;

    //http://localhost:8080/quiz/create?category=Java&numQ=5&title=JQuiz
    @PostMapping("create")
    public ResponseEntity<String> createQuiz(@RequestParam String category, @RequestParam int numQ,@RequestParam String title) {
        return quizService.createQuiz(category,numQ,title);
    }

    //previously we set the id when we call the create API
    //http://localhost:8080/quiz/get/2
    @GetMapping("get/{id}")
    public ResponseEntity<List<QuestionWrapper>> getQuizQuestions(@PathVariable int id) {
        return quizService.getQuizQuestion(id);
    }

    @PostMapping("submit/{id}")
    public ResponseEntity<Integer> submitQuiz(@PathVariable int id,@RequestBody List<Response> responses)
    {
        return quizService.calculateResult(id,responses);
    }
}
